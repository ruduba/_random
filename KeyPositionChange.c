 #include<stdio.h>

 int a[100], b[100], i, j, n, temp, sortedArray, key, low, high, mid, fin, start;

 int linearSearch(int arr[100], int target){
     for (int i = 0; i < n; i++) {
    if (arr[i] == target){
    return i;
        }
 }
 }
 int main()
{
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter the array elements\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
     for (i=0; i<n; i++)
    {
        b[i]=a[i];
    }

    for(i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("the sorted array is\n");
    for (i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("enter the value to locate\n");
    scanf("%d", &key);

    low = 0;
    high= n-1;
    mid =(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<key)
            low = mid+1;
        else if (a[mid]==key)
        {
            printf("the key has been located\n");
            fin = mid+1;
            break;

        }
        else
            high = mid-1;
            mid = (low+high)/2;
    }
    if (low > high)
        printf("Not Found: %d is not found in the list", key);

    start = linearSearch(b, key);
    printf("the key has moved from position %d to position %d after bubble sort ", start+1, mid+1);
}

//for an unsorted 1d array input by the user, sort it using bubble sort, then search for a key element and determine the starting position before the sort and the final position after the sort and print the statement
