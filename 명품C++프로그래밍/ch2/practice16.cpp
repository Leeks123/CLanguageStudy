#include <iostream>

using namespace std;

int main(){
    cout<<"���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�."<<endl<<"�ؽ�Ʈ�� ���� ;�Դϴ�. 10000������ �����մϴ�."<<endl;
    char str[10000]="";
    int alp[26]={0,};
    cin.getline(str,sizeof(str),';');
    int alpcount=0;
    for(int i=0;i<sizeof(str);i++){
        if((str[i]<=90&&65<=str[i])||(str[i]>=97&&str[i]<=122)){
            alpcount++;
            for(int j=0;j<26;j++){
                if(str[i]==65+j||str[i]==97+j){
                    alp[j]++;
                }
            }
        }
    }
    cout<<"�� ���ĺ� �� "<<alpcount<<endl;
    
    for(char c='a';c<='z';c++){
        cout<<c<<" ("<<alp[(int)(c-97)]<<")   : ";
        for(int i=0;i<alp[(int)(c-97)];i++){
            cout<<"*";
        }
        cout<<endl;
    }
     
}
