#include <iostream>
using namespace std;
void FCFS(int arr[], int head , int m)
{
    int seek_count = 0;
    int distance, cur_track;

    for (int i = 0; i < m; i++) {
        cur_track = arr[i];

        // calculate absolute distance
        distance = abs(cur_track - head);

        // increase the total count
        seek_count += distance;

        // accessed track is now new head
        head = cur_track;
    }

    cout << "Total number of seek operations = "
        << seek_count << endl;
    cout << "Seek Sequence is" << endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << endl;
    }
}
int main()
{
    int size,x,head;
    cout<<"Enter no of elements : ";
    cin>>size;
    int arr[size];
    for (x = 0; x < size; x++)
    {
            cin >> arr[x];
    }
    cout<<"Enter head position : ";
    cin>>head;
    FCFS(arr, head , size);

    return 0;
}

