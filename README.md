# Sorting-Visualizer
Ever wondered how the array you've been trying to sort is actually getting sorted? How well your algorithm is working? How actually the array sorting process looks like in the background? sorting-visualizer does just that.

Watch the video [here](https://github.com/Sorting-Visualizer/SortVisualizer) to get an idea.

## Working
So I've used OpenGL for the visualization part. Nothing else you see is too hard to figure out.
Currently, only two algorithms are visualized, Bubble sort and Quick Sort.
Adding new algorithms there isn't a challenge really, hence I'll pass on making any further updates here.
In case you want to add any algorithms, feel free.
All you've got to do is add the following line before and after the comparision you do before a potential swap.

`dispTemp ( your_array, last_element_compared1, last_element_compared2, "Your Algorithm" );`

## Compilation
Compile and run the code using:
```
$ g++ sort.cpp -lglut -lGLU -lGL -fpermissive -o SortVisualizer
$ ./SortVisualizer
```

Needless to say, you need to install OpenGL before you do any of this. If you need to install it on your Linux machine, run the following command.
```
$ sudo apt-get update
$ sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev
```
