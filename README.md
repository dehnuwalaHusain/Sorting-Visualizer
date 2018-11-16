# Sorting-Visualizer
Ever wondered how the array you've been trying to sort is actually getting sorted? How well your algorithm is working? How actually the array sorting process looks like in the background? sorting-visualizer does just that.

Watch the video [here](https://github.com/dehnuwalaHusain/Sorting-Visualizer/blob/master/SortingVisualizer) to get an idea. (You'll have to download that video and play it locally).

## Working
So I've used OpenGL for the visualization part. Nothing else you see is too hard to figure out.
Currently, only two algorithms are visualized, Bubble sort and Quick Sort.
Adding new algorithms there isn't a challenge really, hence I'll pass on making any further updates here.
In case you want to add any algorithms, feel free.

Add your algorithm in [this](https://github.com/dehnuwalaHusain/Sorting-Visualizer/blob/master/src/algorithms.h) file.
Any sorting algorithm compares two elements and carries out a swap in accordance with itself.
Take the example here:
```
if ( numbers [ element1 ] > numbers [ element2 ])
{
	swap (element1, element2);
}
```
All you've got to do is add the following line before and after the comparision you do for a potential swap.

```
dispTemp ( your_array, element_index1, element_index2, "Your Algorithm" );
if ( numbers [ element_index1 ] > numbers [ element_index2 ])
{
	swap (element1, element2);
}
dispTemp ( your_array, element_index1, element_index2, "Your Algorithm" );
```

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
