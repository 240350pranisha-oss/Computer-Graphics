Title:Digital Differential Analyzer Algorithm Algorithm: Start. ∆ y = m ∆ x y2-y1 = m (x2-x1) Declare variables x,y,x1,y1,x2,y2,k,dx,dy,s,xi,yi and also declare gdriver=DETECT, mode. Initialize the graphic mode with the path location in TurboC3 folder. Input the two line end-points and store the left end-points in (x1,y1). Load (x1, y1) into the frame buffer; that is, plot the first point. put x=x1,y=y1. Calculate dx=x2-x1 and dy=y2-y1. If abs (dx) > abs (dy), do s=abs(dx). Otherwise s= abs(dy). Then xi=dx/s and yi=dy/s. Start from k=0 and continuing till k<s,the points will be i. x=x+xi. ii. Y=y+yi. Plot pixels using putpixel at points (x,y) in specified colour. Close Graph and stop.

Here is the **updated Result and Conclusion** with the **name and roll number replaced** as requested:

*Result:*
The program successfully generated a straight white line between the coordinates `(5, 1)` and `(20, 60)` using the Digital Differential Analyzer (DDA) algorithm. The line was created by plotting pixels incrementally, resulting in a smooth and continuous output. The text **“Pranisha Sijapati”** and **“240350”** was displayed at the specified positions on the graphics screen, confirming correct execution of both line drawing and text display functions.

*Conclusion:*
This experiment clearly demonstrates the implementation of the DDA line drawing algorithm, where intermediate points are calculated using fixed incremental steps. The use of `putpixel` for drawing and `outtextxy` for labeling shows how simple C graphics commands control visual output. Proper initialization of starting coordinates ensures accurate line generation, making this program a strong introduction to basic computer graphics concepts.
