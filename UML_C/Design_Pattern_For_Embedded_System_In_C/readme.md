# keypoint
## chapter 1
1. **CH1_2_1**   
In this case, the file serves as the encapsulation boundary, and stylistically two files (a header .hfile and an implementation .c file) group together the elements within a single class.
This approach **supports object-based programming very well**, **but doesn’t implement virtual functions in a fashion that can be easily overridden in subclasses**. An alternative approach that supports object-oriented programming is to embed function pointers within the struct itself.
1. 