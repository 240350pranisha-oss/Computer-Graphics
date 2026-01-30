Title: Triangle Reflection Program in C (Turbo C Graphics)

This C program demonstrates drawing a triangle using the graphics library and performing a reflection of the triangle across the vertical axis of the screen. 
Algorithm: 
The program defines the initial coordinates of a triangle in a 2D array (PolygonPoints).
The PolyLine() function draws the triangle and the axes on the graphics window.
The Reflect() function performs a horizontal reflection by flipping the X-coordinates of the triangle points relative to the screen width (640 pixels).
The main function adjusts the triangle coordinates to fit the graphics window, displays the original triangle, waits for a key press, reflects the triangle, and then redraws it.