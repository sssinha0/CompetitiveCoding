#include<stdio.h>
struct student{
    int roll;
    double cpga;
    char name[100];
    char branch[100];
};
    int binarySearch(struct student arr[5], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid].roll == x)
            return mid;
        if (arr[mid].roll > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(){
    struct student arr[5];
    
    for(int i=0;i<5;i++){
        printf("enter the Name(stirng),Roll(int),Cpga(dobule),Branch(stirng) of 5 student");
          scanf("%s%d%lf%s",arr[i].name,&arr[i].roll,&arr[i].cpga,arr[i].branch);     
    }
    // arr[0].roll=43;
    // arr[0].cpga=8.00;
    // arr[0].name[]="sahsi";
    // arr[0].branch[]="cse";

    // arr[1].roll=41;
    // arr[1].cpga=8.43;
    // arr[1].name[]="avinash";
    // arr[1].branch[]="ece";

    // arr[2].roll=40;
    // arr[2].cpga=7.00;
    // arr[2].name[]="dileep";
    // arr[2].branch[]="ce";

    // arr[3].roll=39;
    // arr[3].cpga=6.23;
    // arr[3].name[]="abhishek";
    // arr[3].branch[]="me";

    // arr[4].roll=38;
    // arr[4].cpga=7.39;
    // arr[4].name[]="rahul";
    // arr[4].branch[]="msc";
    //linear search by rollno
    printf("enter the roll to search by linear\n");
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=0;i<5;i++){
        if(arr[i].roll==n){
            flag=1;
            printf("Roll no founded and details are:\n");
            printf("name=%s\n rollno=%d\n cpga=%lf\n branch=%s",arr[i].name,arr[i].roll,arr[i].cpga,arr[i].branch);
            break;
        }
    }
    if(flag==0)
        printf("Rollno not found\n");
    //Bublle sort for student by rollno
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j].roll>arr[j+1].roll){
                struct student temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After bubble sorting by rollno\n");
    for(int i=0;i<5;i++){
         printf("name=%s\n rollno=%d\n cpga=%lf\n branch=%s\n\n",arr[i].name,arr[i].roll,arr[i].cpga,arr[i].branch);
           
    }

    //apply binary search on sorted by rollno
    int k=0;
    printf("enter the rollno to binary search\n");
    scanf("%d",&k);
    int res=binarySearch(arr,0,5,k);
    
    if(res==-1)
        printf("Not found\n");
    else{
        printf("founded and details are:\n");
        printf("name=%s\n rollno=%d\n cpga=%lf\n branch=%s\n\n",arr[res].name,arr[res].roll,arr[res].cpga,arr[res].branch);
          }
//insertion sort for desceining for order
  for (int step = 1; step < 5; step++)
{
struct student key = arr[step];
int j = step - 1;
while (key.cpga > arr[j].cpga && j >= 0)
{
arr[j + 1] = arr[j];
--j;
}
arr[j + 1] = key;
}
    //after sorting detaila are
 for(int i=0;i<5;i++){
        printf("name=%s\n rollno=%d\n cpga=%lf\n branch=%s\n\n",arr[i].name,arr[i].roll,arr[i].cpga,arr[i].branch);
        
    }

    return 0;
}