#include <iostream>

using namespace std;

int main(){
    //Khai bao mang
    int n;
    cout<<"Nhap mang co n phan tu: ";
    cin>>n;
    int a[n];
    int kq[n];
    //Nhap vao cac phan tu cua mang
    for(int i=0; i<n; i++){
        cout<<"Nhap a["<<i<<"]=";
        cin>>a[i];
    }
    //Khai bao k
    int k;
    cout<<"Nhap k = ";
    cin>>k;
    //Tinh tong cua k phan tu trong mang 
    int sum=0;
    if(k>=1 && k<=n){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<k; j++){
                sum += a[j+i];
            }
            //cout<<sum<<endl;
            kq[i]=sum;
            sum=0;
        }
    }
    else{
        cout<<"K khong dung'!";
    }
    //Xuat ket qua ra man hinh
    cout<<"Tong cac phan tu lan luot la:"<<endl;
    for(int i=0; i<n-1; i++){
        cout<<"a["<<i<<"]+a["<<i+1<<"]="<<kq[i]<<endl;
    }
    //So sanh tong lon nhat trong mang kq
    int max=0;
    for(int i=0; i<n-1; i++){
        if(kq[i]>max){
            max = kq[i];
        }
    }
    cout<<"Tong lon nhat la: "<<max;
    
    
    return 0;
}
