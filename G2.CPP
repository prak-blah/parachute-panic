//just adding a stupid comment
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void boat( int i, int c )
 { setcolor(c);
   line(i,400,i-20,436);
   line(i-20,436,i-120,436);
   line(i-120,435,i-140,400);
   line(i-140,400,i,400);
   setfillstyle(2,c);
   floodfill(i-30,430,c);
 }

  void heli1( int i, int c, int y )
      {setcolor(c);
       ellipse(i,50,0,360,50,25);

       line(i+49,45,i+100,53);
       line(i+49,55,i+100,53);
       setfillstyle(1,c);
       floodfill(i+51,53,c);

       ellipse(i+105,55,0,360,5,10);
       setfillstyle(1,c);
       floodfill(i+10,50,c);
       setfillstyle(1,c);
       floodfill(i+105,55,c);

       line(i+10,76,i+10,86);
       line(i-10,76,i-10,86);
       line(i-15,86,i+15,86);
       line(i-15,84,i+15,84);
       line(i,25,i,15);
       line(i-1,25,i-1,15);
       line(i+1,25,i+1,15);

       ellipse(i,12,0,360,30,2);
       setfillstyle(1,c);
       floodfill(i,12,c);

	setcolor(y);
       sector(i,50,90,180,40,20);
       setfillstyle(2,y);
       floodfill(i-10,40,y);
       }


       void heli2( int i, int c, int y )
      {setcolor(c);
       ellipse(i,444,0,360,50,25);

       line(i+49,439,i+100,447);
       line(i+49,449,i+100,447);
       setfillstyle(1,c);
       floodfill(i+51,447,c);

       ellipse(i+105,449,0,360,5,10);
       setfillstyle(1,c);
       floodfill(i+10,444,c);
       setfillstyle(1,c);
       floodfill(i+105,449,c);

       line(i+10,470,i+10,480);
       line(i-10,470,i-10,480);
       line(i-15,480,i+15,480);
       line(i-15,478,i+15,478);
       line(i,419,i,409);
       line(i-1,419,i-1,409);
       line(i+1,419,i+1,409);

       ellipse(i,406,0,360,30,2);
       setfillstyle(1,c);
       floodfill(i,406,c);

	setcolor(y);
       sector(i,444,90,180,40,20);
       setfillstyle(2,y);
       floodfill(i-10,434,y);
       }
  //blo==blood
  void blo(int i, int j, int c)
  {setcolor(4);
   circle(i,j,10);
   setfillstyle(1,c);
   floodfill(i,j,c);

   circle(i+8,j,8);
   setfillstyle(1,c);
   floodfill(i+11,j,c);

   circle(i,j+10,10);
   setfillstyle(1,c);
   floodfill(i,j+11,c);

   circle(i-10,j+4,8);
   setfillstyle(1,c);
   floodfill(i-11,i+4,c);
   }

  void man1( int x, int k, int c )
   {  setcolor(c);
      circle(x+7,k+2,5);//face            //x=333
      circle(x+5,k+1,1);//eyes
      circle(x+9,k+1,1);//eyes
      line(x+6,k+4,x+8,k+4);//mouth
      line(x+7,k+7,x+7,k+24);
      line(x+7,k+11,x,k+16);//hands
      line(x+7,k+11,x+14,k+16);//hands
      line(x+7,k+24,x+2,k+31);//legs
      line(x+7,k+24,x+12,k+31);//legs

   }

   void man2( int x, int k, int c, int b, int d )
   {  setcolor(c);
      circle(x+7,k+2,5);//face            //x=333
      circle(x+5,k+1,1);//eyes
      circle(x+9,k+1,1);//eyes
      line(x+6,k+4,x+8,k+4);//mouth
      line(x+7,k+7,x+7,k+24);
      line(x+7,k+11,x-5,k-5);//hands
      line(x+7,k+11,x+19,k-5);//hands
      line(x+7,k+24,x+2,k+31);//legs
      line(x+7,k+24,x+12,k+31);//legs

      setcolor(b);
      ellipse(x+7,k-28,0,360,15,20);
      line(x,k-10,x+14,k-10);     //parachute
      setfillstyle(1,b);
      floodfill(x+7,k-37,b);

      setcolor(d);
      line(x-2,k-12,x+7,k+17);
      line(x+16,k-12,x+7,k+17);
   }

 void wind4(int x,int y, int c)
   { setcolor(c);
     ellipse(x+15,y+2,160,340,20,5);      //x=605 y=238
     ellipse(x,y,340,180,5,5);

     ellipse(x+15,y+32,160,340,20,5);      //x=605 y=238
     ellipse(x,y+30,340,180,5,5);

     ellipse(x+15,y-28,160,340,20,5);      //x=605 y=238
     ellipse(x,y-30,340,180,5,5);

   }

 void sharkr(int x,int c)
 {setcolor(c);
  ellipse(x,470,0,90,10,20);
  ellipse(x,470,0,90,30,20);
  line(x+10,470,x+30,470);
  setfillstyle(1,c);
  floodfill(x+20,465,c);

}
 void sharkl(int x,int c)
 { setcolor(c);
   ellipse(x,470,90,180,10,20);
   ellipse(x,470,90,180,30,20);
   line(x-10,470,x-30,470);
   setfillstyle(1,c);
   floodfill(x-20,465,c);

 }

   void wind6(int x,int y, int c)
   { setcolor(c);
     ellipse(x,y,200,20,20,5);
     ellipse(x+15,y-2,340,180,5,5);

     ellipse(x,y-30,200,20,20,5);
     ellipse(x+15,y-32,340,180,5,5);

     ellipse(x,y+30,200,20,20,5);
     ellipse(x+15,y+28,340,180,5,5);

   }


	void mainscreen()
{int i=0,y=-50,x=50,j=0,co1=2,co2=2,t,col,u,v,w;
  char a[]="PARACHUTE",b[]="PANIC",ch;
  char c[]=" \0";
 while(a[j]!='\0')
  {c[0]=a[j];
   for(y=-50;y<=100;y++)
   { man2(x,y,co2,co1,15);
     settextstyle(7,0,4);
     setcolor(15);
     outtextxy(x-3,y-48,c);

     delay(1);

     man2(x,y,0,0,0);
     setcolor(0);
     outtextxy(x-3,y-48,c);

   }
     man2(x,y,co2,co1,15);
     settextstyle(7,0,4);
     setcolor(15);
     outtextxy(x-3,y-48,c);
     x=x+50;j++;co2=co2+1;co1=co1+1;
   }

   delay(10);

   x=300;

    j=0;

    while(b[j]!='\0')
   { c[0]=b[j];

     for(y=530;y>=250;y--)
     { man2(x,y,co2,co1,2);
       settextstyle(7,0,4);
       setcolor(4);
       outtextxy(x-3,y-48,c);
       delay(1);
       man2(x,y,0,0,0);
       setcolor(0);
       outtextxy(x-3,y-48,c);
     }
     man2(x,y,co2,co1,2);
     settextstyle(7,0,4);
     setcolor(4);
     outtextxy(x-3,y-48,c);
     x=x+50; j++;co2=co2+2;co1=co1+2;
   }

   settextstyle(7,0,2);
   setcolor(4);
   outtextxy(200,330,"BY YASH AND PRASUK");

   delay(50);

   settextstyle(7,0,2);
   setcolor(4);
   outtextxy(200,400,"press any key to continue");

   getch();

   i=640;u=0;v=640;
   while((i>=320)&&(u<=320))
   {
   setcolor(0);
     setlinestyle(0,0,1);
     line(i,0,i,480);
     line(u,0,u,480);
     heli1(v-1,1,15);
     heli2(v-1,1,15);

     delay(0.1);

     heli1(v-1,0,0);
     heli2(v-1,0,0);
      setcolor(0);
     line(i,50,i,430);
     line(u,0,u,480);
    u++;i--;v=v-5;
   }


   setcolor(2);
   settextstyle(7,0,5);

   outtextxy(10,10,"INSTRUCTIONS");
   settextstyle(7,0,1);
   outtextxy(10,100,"THE WAR IS ONN...OUR MEN NEED SOME REINFORCEMENTS");
   outtextxy(10,125,"THE HELIPCOPTERS WILL DROP THE SOLDIERS IN THE OCEAN.");
   outtextxy(10,150,"YOUR OBJECTIVE IS TO SAFELY LAND OUR SOLDIERS INTO ");
   outtextxy(10,175,"THE BOAT BELOW.....BUT BEWARE THE OCEAN IS FULL OF");
   outtextxy(10,200,"DEADLY, MAN-EATING AND HUNGRY SHARKS...");
   outtextxy(10,225,"THE SOLDIERS WILL BE JUMPING FROM A HEIGHT OF 15,000 ");
   outtextxy(10,250,"ft AND YOU'll NEED TO OPEN PARACHUTE AS SOON AS ");
   outtextxy(10,275,"POSSIBLE BUT IF YOU FAIL THE SOLDIERS WILL DIE...");


   setcolor(2);
   outtextxy(200,400,"press any key to continue");

   getch();

    for(i=639;i>=0;i--)
   { setcolor(0);
     setlinestyle(0,0,1);
     line(i,0,i,480);
   }

   settextstyle(7,0,5);
   setcolor(4);
   outtextxy(10,10,"CONTROLS");
   setlinestyle(3,0,1);
   line(0,60,220,60);
   line(0,61,220,61);
   line(0,62,220,62);
   line(0,59,220,59);

   setlinestyle(0,0,1);
   setcolor(4);
   rectangle(100,100,130,120);
   line(100,101,130,101);
   line(101,100,101,120);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(110,100,"T");
   outtextxy(160,100,"open parachute");

   rectangle(100,130,130,150);
   line(100,131,130,131);
   line(101,130,101,150);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(110,130,"4");
   outtextxy(160,130,"left movement");

   rectangle(100,160,130,180);
   line(100,161,130,161);
   line(101,160,101,180);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(110,160,"5");
   outtextxy(160,160,"speed up");

   rectangle(100,190,130,210);
   line(100,191,130,191);
   line(101,190,101,210);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(110,190,"6");
   outtextxy(160,190,"right movement");

   rectangle(100,220,130,240);
   line(100,221,130,221);
   line(101,220,101,240);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(110,220,"8");
   outtextxy(160,220,"slow down");

   rectangle(10,420,40,440);
   line(10,421,40,421);
   line(11,420,11,440);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(20,418,"Q");
   outtextxy(50,415,"quit");

   rectangle(550,420,580,440);
   line(550,421,580,421);
   line(551,420,551,440);
   settextstyle(1,0,1);
   setcolor(4);
   outtextxy(560,418,"P");
   outtextxy(590,415,"play");
   getch();


    for(i=0;i<=480;i++)
   { man1(10,i,1);
     man1(620,i,1);
     setcolor(15);
     line(20,i,620,i);

     delay(10);

     setcolor(0);
     setlinestyle(0,0,1);
     line(0,i,640,i);
     man1(10,i,0);
     man1(620,i,0);
      setcolor(0);
     line(20,i,620,i);
   }

}

void endscreen()
  { int i;
   for(i=639;i>=0;i--)
   { setcolor(15);
     setlinestyle(0,0,1);
     line(i,0,i,480);
     setcolor(4);
     settextstyle(4,0,7);
     outtextxy(i+50,180,"GAME OVER");
     delay(1);
     setcolor(15);
     settextstyle(4,0,7);
     outtextxy(i+50,180,"GAME OVER");

   }
    setcolor(4);
     settextstyle(4,0,7);

     outtextxy(i+50,175,"GAME OVER");
     setcolor(0);
     settextstyle(1,0,2);
     outtextxy(315,300,"SCORE :");


  }



 void main()
 {
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode," ");
  int j=640,l=0,m=640,g=0,mt=0,manx,po=0,mand,sc=0,li=3,flag1=0,flag2=0;
  float k=-12,h=-12,i=640,spe=0;
  char ch;

  mainscreen();

  randomize();
  do
  {
  setcolor(1);
  rectangle(0,437,639,479);
  setfillstyle(1,1);
  floodfill(638,470,1);
  setcolor(0);
  rectangle(0,0,639,479);
  setfillstyle(1,9);
  floodfill(2,3,1);

   mand=100+random(500);


   while((ch!='q')&&(h<=400)&&(flag1==0)&&(flag2==0))
   {if(kbhit())
     ch=getch();
    ch=tolower(ch);

    boat(i,6);
    heli1(j,0,15);
    sharkr(l,7);

    if(l==640)
      {g=1;m=640;l=0;}
    if(g==1)
      sharkl(m,8);

    if((j<=mand)&&(j>=mand-20))
     {mt=1;
       manx=j;
      }

    if(mt==1)
     man1(manx,k,0);
    if(mt==2)
     man2(manx,h,0,8,7);

    settextstyle(2,0,5);
   outtextxy(525,1,"SCORE : ");
   gotoxy(75,1);
   cout<<sc;
   outtextxy(1,1,"LIFE : ");
   gotoxy(6,1);
   cout<<li;


    if(mt==2)
    {if(getpixel(manx,h+38)==6)
     flag1=1;
    }

     if((mt==1)&&((getpixel(manx,k+35)==6)||(getpixel(manx,k+35)==1)))
      flag2=1;

    delay(1);

    boat(i,9);
    heli1(j,9,9);

     sharkr(l,1);
    if(g==1)
     sharkl(m,1);

    if(mt==1)
     man1(manx,k,9);
    if(mt==2)
     man2(manx,h,9,9,9);


     if(ch=='t')
     {mt=2;
      h=k;
      po=1;
      ch=' ';
     }

    if(i<0)//remake the boat
     i=640;


    i=i-0.7;j=j-7;k=k+1.5+spe;l=l+5;m=m-5;h=h+0.8+spe;
    if(po==1)
     {
      switch(ch)
      {case 'q': exit(0);

       case '4': manx=manx-2;
		 wind4(605,238,1);
		 delay(5);
		 wind4(605,238,2);
		 wind4(605,238,9);

		 break;
       case '6': manx=manx+2;
		 wind6(20,240,1);
		 delay(5);
		 wind6(20,240,2);
		 wind6(20,240,9);

		 break;
       case '8': h=h-0.2;
		 break;
       case '5': h=h+0.5;
		 break;

      }//end of switch ch
     }

   }//end of while ch
   if(((flag1==0)&&(h>400))||(flag2==1))
    {li--;
     //blo(k,404,4);
      //delay(30);
     //blo(k,404,2);
     flag2=0;
     j=640;l=0;m=640;g=0;mt=0;po=0;k=-12;h=-125;
    }
    if(flag1==1)
     {sc=sc+100;
      flag1=0;
     j=640;l=0;m=640;g=0;mt=0;po=0;k=-12;h=-125;
      spe=spe+0.5;
     }


 }while((ch!='q')&&(li>0));

 endscreen();
// gotoxy(50,20);
  //   cout<<sc;
 getch();
}



