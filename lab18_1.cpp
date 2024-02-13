#include<iostream>
using namespace std;

struct Rect{
    double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
    double ovl_W,ovl_H;
    double area;

    ovl_W = min(r1.x+r1.w,r2.x+r2.w) - max(r1.x,r2.x) ;
    ovl_H = min(r1.y,r2.y) - max(r1.y-r1.h,r2.y-r2.h) ;
    area = ovl_W * ovl_H;
    
    if(area <= 0){
    return 0 ;
    }else{
    return area ;}
	
}
