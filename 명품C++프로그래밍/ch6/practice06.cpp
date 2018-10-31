#include <iostream>

using namespace std;

class ArrayUtility2{

public:
    static int* concat(int s1[],int s2[],int size);
    static int* remove(int s1[],int s2[],int size,int& retSize);
};
int* ArrayUtility2::concat(int s1[],int s2[],int size){
    int* tmp = new int[size*2];
    for(int i=0;i<size;i++){
        tmp[i]=s1[i];
        tmp[size+i]=s2[i];
    }
    return tmp;
}
int* ArrayUtility2::remove(int s1[],int s2[],int size,int& retSize){
    int r=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(s1[i]==s2[j])
                r++;
        }
    }
    retSize = size-r;
    int* ret;
    if(retSize == 0)
        return NULL;
    else
        ret = new int[retSize];
    int k=0;
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(s1[i]==s2[j])
                break;
        }
        ret[k]=s1[i];k++;
    }
    return ret;
}

int main(){
    cout<<"������ 5 ���� �Է��϶�. �迭 x�� �����Ѵ� >> ";
    int x[5];
    cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4];
    
    cout<<"������ 5 ���� �Է��϶�. �迭 y�� �����Ѵ� >> ";
    int y[5];
    cin>>y[0]>>y[1]>>y[2]>>y[3]>>y[4];
    
    cout<<"��ģ ���� �迭�� ����Ѵ�."<<endl; 
    int *arr = ArrayUtility2::concat(x,y,5);
    for(int i=0;i<5*2;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
    int count;
    int *ptr = ArrayUtility2::remove(x,y,5,count);
    cout<<"x���� y�� �� ����� ����Ѵ�."<<"������ "<<count<<endl; 
    
    for(int i=0;i<count;i++){
        cout<<ptr[i]<<' ';
    }
    cout<<endl;
    
}
