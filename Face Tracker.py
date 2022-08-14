import cv2
import numpy as np
import RPi.GPIO as GPIO
import time

cap = cv2.VideoCapture(0)
_, frame=cap.read()
rows,cols,_=frame.shape
degree = 90
frame_center = int(cols/2)
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11,GPIO.OUT)
servo = GPIO.PWM(11,50)
servo.start(0)
while True:
    _, frame=cap.read()
    gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    faces=face_cascade.detectMultiScale(gray,1.1,2)

    for (x,y,w,h) in faces: # x and y location of the rectangle, and the rectangle’s width and height (w , h)
        face_mid=int((x+x+w)/2)    # x coordinate of the middle of the face 
        cv2.line(frame,(face_mid,0),(face_mid,480),(0,255,0),2)  # draw a line on the face
        print("detected")
    
    cv2.imshow("Frame",frame)
    
    key=cv2.waitKey(1)
    
    if key==27:   # Esc key to stop
        break
    if degree >= 180:   # keep degree between 0-180 (limit of servo motor angle)
        degree = 175
    elif degree <= 0:
        degree = 5
    if face_mid < frame_center - 15:   # keep face in the center
        degree += 5                    # if face is within +- 15 cols, tracker doesn't need to move, prevents jittering
    elif face_mid > frame_center + 15:
        degree -= 5

    servo.ChangeDutyCycle(2+(degree/18))  # servo motor control
    time.sleep(0.2)
    servo.ChangeDutyCycle(0)

print('finished')

degree = 90
servo.ChangeDutyCycle(2+(degree/18))  # turn back to initial angle
time.sleep(0.015)
servo.ChangeDutyCycle(0)
servo.stop()
GPIO.cleanup()
cv2.destroyAllWindows()  
cap.release()
