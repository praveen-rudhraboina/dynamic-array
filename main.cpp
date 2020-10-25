#include <bits/stdc++.h>
using namespace std;
class dynamicarray{
    int *array;
    int size;
    int index;
public:
dynamicarray(){
 index=0;
 size=1;
 array = new int[1];
}

void insert_at_position(int element,int position)
{
    if(position==index)
        insert(element);
    else
        array[position]=element;
}
void insert(int element)
{
    
    if(index==size)
    {
    int *temp=new int[2*size];
    for(int i=0;i<size;i++)
    {
        temp[i]=array[i];
    }
    delete []array;
    size*=2;
    array=temp;
    }
        array[index]=element;
        index=index+1;
        cout<<index<<endl;
   
}
int no_of_elements()
{
    return index;
}
int capacity_of_array()
{
    return size;
}
int get_last_element()
{
    return array[index-1];
}
int delete_at_front()
{
    for(int i=0;i<index-1;i++)
    {
        array[i]=array[i+1];
    }
    index--;
}
void print_array()
{
    if(index==0)
        cout<<"No values"<<endl;
    else
    {
    for(int i=0;i<index;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    }
}
int begin()
{
    return 0;
}
int end()
{
    return index-1;
}
int rbegin()
{
    return index;
}
int rend()
{
    return 0;
}
int at(int position)
{
    if(position>index)
        cout<<"index out of range";
    else
    {
    return array[position];
    }
}
void clear()
{
    index=0;
}
int empty()
{
    if(index==0)
        return 1;
    else 
        return 0;
}
void reverse()
{
    for(int i=end();i>=0;i--)
        cout<<array[i]<<" ";
    cout<<endl;
}
void swap(int *index1,int *index2)
{
   int temp=*index1;
    *index1=*index2;
    *index2=temp;
}
void sort(int start,int end){
    for (int i = start; i < end; i++)      
      {
    // Last i elements are already in place  
    for (int j = start; j < end; j++) 
    {
    if(array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}
/*
void sort(int start,int end,greater<int>())
{
    sort(start,end);
    reverse();
}
*/
};

int main() {
	// your code goes here
	dynamicarray arr;
	arr.insert(10);
	arr.insert(11);
	arr.insert(12);
	arr.insert(13);
	arr.insert(3);
	arr.insert(1);
	arr.insert(5);
//	arr.insert_at_position(100,4);
//	arr.insert_at_position(200,5);
	//arr.delete_at_front();
	
	cout<<"no of elements"<<" : "<<arr.no_of_elements()<<endl;
	/*cout<<"last element "<<": "<<arr.get_last_element()<<endl;
	cout<<"maximum capacity of aray "<<": "<<arr.capacity_of_array()<<endl;
	arr.print_array();
	cout<<"start index "<<": "<<arr.begin()<<endl;
	cout<<"last index "<<": "<<arr.end()<<endl;
	cout<<arr.at(100)<<endl;
	arr.sort(arr.begin(),arr.end());
	//arr.sort(arr.begin(),arr.end(),greater<int>());
	arr.print_array();
	arr.reverse();
	arr.clear();
	//arr.erase(2);
	arr.print_array();
	if(arr.empty())
	    cout<<"True"<<endl;
	else
	    cout<<"False"<<endl;
	    */
	return 0;
}
