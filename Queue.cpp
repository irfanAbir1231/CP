#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printQueue(queue<int> queue)
{
    while(!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();
    }
    cout<<endl;
}
 
signed main()
{
    //fifo

    queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout<<"Size is "<<myQueue.size()<<endl;
    cout<<"First element is "<<myQueue.front() << endl;
    cout<<"Last element is "<<myQueue.back()<<endl;

    cout<<"My Queue: "<<endl;
    printQueue(myQueue);
 

 
return 0;
}