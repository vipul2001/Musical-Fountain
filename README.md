
 # Musical-Fountain

 ![Image 3](https://github.com/kshitij2116/Musical-Fountain/blob/master/Images%20and%20Videos/Images/Model%20in%20light.JPG)

## Abstract

 The idea behind the project is that we use the concept of nodes in sound, and use it to control the movement of servos and the brightness of LEDs.  

 We also added a stepper motor which rotates the entire revolute at a constant 30 steps per second. We also added another stepper motor which would control a central valve.

The nozzles were 3d printed to reduce the mannufacturing cost. For insulation, we mostly used locally available epoxy glue and araldite. 

## Motivation

From the outside , musical fountain seemed to be a trivial project. but, when we got into its technical aspects, it wasn't so. Everytime we came up with a design, we had to brainstorm it and eventually a new design came into picture.   
This challenge of coming up with an efficient model is what kept us motivated.

## Electronic Aspect  

1. An app named Audacity was used to export the data points corresponding to a song(the value of the data points signifies the voltage values of the sound signals).The extracted data was analyzed and plotted to see the maximum and minimum value of the data points.In the arduino code, the stepper was given a rotation after every 10 iterations and servo were rotated as per a fixed pattern of iterations.  
2. The Leds were made to dance as per the data points value by giving the range of value between the maximum and minimum values calculated before.For every specific command, functions were made and were called when required in the void loop.Also one more stepper motor was attached to a flow regulator to regulate the flow of water coming to the central nozzle.  
3. Dataset was made for 5 songs.As the space available in the arduino is limited , we used sd card to store the data points value and read the corresponding value in the code directly from the sd card.Most of the electronic parts like motors and wires were in the water, hence all the components were completely sealed and water proofed so that no damage is caused by water.
  

## Mechanical Aspect  
![Image 6]( https://github.com/kshitij2116/Musical-Fountain/blob/master/Mechanical%20Design/Solidworks_model_design2.png)
1. The revolute of the model was based on The Lazy Susan armature. we 3d printed the nozzles and 2 gears with 50 and 25 teeth respectively.  
2. 6 hollow tubes were attached on the lazy susan, at the end of each was a servo motor attached which would eventually control the movement of the nozzle.  
3. A secondary base was manufactured to setup the stepper motor which was used to rotate the armature. the secodary base also housed another stepper motor which would be controlling the valve. 3 pumps were used to pump water in the fountain.  

## Cost Structure  
|COMPONENTS | COST(₹)|
|----|------|
|Arduino Mega |  1300|
|Motor Drive |  160*2|
|Servo Motor |  325*6|
|Stepper | 690*2|
|Lazy Susan | 1250|
|Tub | 670|
|IC, BreadBoard, etc | 300|
|Wiring | 1000|
|LEDs | 350|
|M Seal, Araldite | 300|
|Aluminium Rod | 280|
|Central Valve | 300|
|Pump | 2000|
|Piping | 700 |
|Total Estimated Cost | 11,500|


## Application  

It has been observed that when soothing music is played near crops, there yeild increases. So this technique will be very helpful in drip irrigation. 
Also, musical fountain increases the aesthetic value of the place where it is established.  


## Limitation  

Our fountain's performance was greatly hindered by the pumps we used. Low quality piping and insulation can also be a contributing factor for bad performance.  
## Future Improvements  

We can improve the quality and way of insulation which was provided to the fountain's electrical components. Its base needed attention too. Also, pumps with higher values of Q should be used.  

## Team Members  

1. Archi Agarwal
2. Jalaj Madaan
3. Kshitij Srikant
4. Tabish Madni
5. Tejas Naik
6. Vaibhavi Chidella
7. Vipul Bansal  

## Mentors

1. Prachi Agarwal
2. Vandan Gajjar
![Image 4](https://github.com/kshitij2116/Musical-Fountain/blob/master/Images%20and%20Videos/Images/Project%20with%20teammates.JPG)
## References  

1. https://ieeexplore.ieee.org/abstract/document/5230466
2. https://manual.audacityteam.org/man/tutorials.html
3. https://www.arduino.cc/en/Reference/SD
4. https://matplotlib.org/tutorials/introductory/pyplot.html
5. And some of the tips and ideas given by seniors :)

