#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void DrowCircleB (int xc,int yc, int r){
	int x =0, y=r;
	int p = 3-2*r;
	cout<<"("<<x+xc<<","<<y+yc<<")"<<endl;
	cout<<"("<<-x+xc<<","<<y+yc<<")"<<endl;
	cout<<"("<<x+xc<<","<<-y+yc<<")"<<endl;
	cout<<"("<<-x+xc<<","<<-y+yc<<")"<<endl;
	
	
	while(x<y){
		x++;
		if(p<0)
		p = p+4*x+6;
		else{
			y--;
			p = p+4*(x-y)+10;
		}
		if(x>y)
		break;
		
	cout<<"("<<x+xc<<","<<y+yc<<")"<<endl;
	cout<<"("<<-x+xc<<","<<y+yc<<")"<<endl;
	cout<<"("<<x+xc<<","<<-y+yc<<")"<<endl;
	cout<<"("<<-x+xc<<","<<-y+yc<<")"<<endl;
	if(x!=y){
		cout<<"("<<y+xc<<","<<x+yc<<")"<<endl;
		cout<<"("<<-y+xc<<","<<x+yc<<")"<<endl;
	cout<<"("<<y+xc<<","<<-x+yc<<")"<<endl;
	cout<<"("<<-y+xc<<","<<-x+yc<<")"<<endl;
	}
	}

}
int main() {
	int xc,yc,r;
	cout<<"Enter the center coordinatesa of the circle";
	cin >>xc,yc;
    cin >>yc;
	cout<<"Enter the radius";
	cin>>r;
	DrowCircleB(xc,yc, r);
	return 0;
}