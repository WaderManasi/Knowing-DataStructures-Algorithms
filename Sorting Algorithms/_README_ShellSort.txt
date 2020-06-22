
*********************SHELL SORT*********************

1]This sorting algorithm is a generalization of insertion sort. (which works efficiently on input that is
already almost sorted)
2]Shell sort is also known as n-gap insertion sort.
3]Instead of comparing only the adjacent pair, shell sort makes several passes and uses various gaps between adjacent
elements (ending with the gap of 1 or classical insertion sort).
4]This is the first algorithm which got less than quadratic complexity among comparison sort algorithms.
5]The basic idea in shellsort is to exchange every hth element in the array.
6]Shell sort
improves the efficiency of insertion sort by quickly shifting values to their destination.

7]Analysis
Shell sort is efficient for medium size lists. For bigger lists, the algorithm is not the best choice. It
is the fastest of all O(n2) sorting algorithms.

8]Shell sort is significantly slower than the merge, heap, and quick
sorts, but is a relatively simple algorithm, which makes it a good choice for sorting lists of less
than 5000 items unless speed is important.

9]Performance
Worst case complexity depends on gap sequence. Best known: O(nlog2n)
Best case complexity: O(n)
Average case complexity depends on gap sequence
Worst case space complexity: O(n)