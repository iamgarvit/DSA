#include <bits/stdc++.h>
using namespace std;

/*
int main(){
    float a,b;
    float avg;
    cin>>a;
    cin>>b;
    avg=(a+b)/2;
    cout<<"The sum is : "<<a+b<<"\n";
    cout<<"The average is : "<<avg<<"\n";
    cout<<"The sum of squares is : "<<(a*a + b*b)<<"\n";
    return 0;
}
*/


/*
int main(){
    string name,address;
    int age;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your address : ";
    cin>>address;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Your name is : "<<name<<"\n"<<"Your address is : "<<address<<"\n"<<"Your age is : "<<age;
    return 0;
}
*/



/*
int max(int arr1[]){
    int max_val=arr1[0];
    for(int i=0;i<10;i++){
        if(arr1[i]>max_val)
            max_val=arr1[i];
    }
    return max_val;
}

int min(int arr2[]){
    int min_val=arr2[10];
    for(int i=0;i<10;i++){
        if(arr2[i]<min_val)
            min_val=arr2[i];
    }
    return min_val;
}

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout<<"The maximum number is : "<<max(arr)<<"\n"<<"The minimum value is : "<<min(arr)<<"\n";
    return 0;
}
*/


/*
int main(){
    float temp_cel;
    cout<<"Enter temperature in celcius : ";
    cin>>temp_cel;
    cout<<"Temperature in fahrenheit is : "<< ((9*temp_cel)/5)+32<<"\n";
    return 0;
}
*/


/*
int main(){
    cout<<"My name is Garvit. \nMy age is 19 years. \nI live in Dwarka,Delhi. \nAbout me: I'm very interested in AI and it's impact on the world. \n";
}
*/


/*
int main(){
    int n;
    cout<<"Enter a number greater than or equal to 3 : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                if(i+j+k<=n)
                    cout<<i<<" "<<j<<" "<<k<<"\n";
            }
        }
    }
    return 0;
}
*/


/*
int main(){
    float radius,area,pi=3.14159;
    cin>>radius;
    area=radius*radius*pi;
    cout<<"The area of a circle of radius "<<radius<<" units is "<<area<<" units";
}
*/

/*
int main(){
    float cm,inch;
    int feet;
    cin>>cm;
    inch=cm/2.54;
    feet=inch/12;
    inch=(inch-12*feet);
    printf("%d feet %.1f inch",feet,inch);
}
*/


/*
int main(){
    int time,hours,minutes,seconds;
    cin>>time;
    hours=time/3600;
    minutes=(time-(3600*hours))/60;
    seconds=((time-(3600*hours)-(60*minutes)));
    cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds ";
}
*/


/*
int main(){
    int time_current,time_duration,cur_hour,cur_min,dur_hour,dur_min;
    cin>>time_current>>time_duration;
    cur_hour=time_current/100;
    cur_min=time_current%100;
    dur_hour=time_duration/100;
    dur_min=time_duration%100;
    
    int time_after,after_hour,after_min,carry=0;
    after_min=(cur_min+dur_min)%60;
    carry=(cur_min+dur_min)/60;
    after_hour=(cur_hour+dur_hour+carry)%24;
    time_after=100*after_hour+after_min;
    cout<<"The time "<<time_duration<<" after "<<time_current<<" is "<<time_after;
    return 0;
}
*/
