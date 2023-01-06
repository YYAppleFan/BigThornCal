#include <iostream>
using namespace std;
int main() {
    int i,j,k,m,n=0,animal=0,node=0,ending,system;
    double score=0;
    int gongsheng=30,
    chaoxue=50,juxiangushou=30,
    lingdiyishi=80,minghenleyuan=50,
    shikong=120,yushengchi=90,haomengzaihefang=90,jixiezhizai=60,
    shuihuoxiangrong=150,shendurenzhi=80,
    zhenxiang=50,tiaowu=50,yabenyunzuo=80,
    yazi=20,xiong=15,gou=15;
    string name,operation,add="",history[80];
    for(i=1;i<80;i++){
        history[i]="blank";
    }
    i=0;
    cout<<"欢迎使用大集杯#0选手分数计算系统[阶段3]"<<endl;
    cout<<"选手姓名:";
    cin>>name;
    cout<<"接下来进行普通节点统计(1)并输入加分节点，end以结束【特殊节点：无漏真相/完美跳舞】"<<endl;
    for(;add!="end";){
        cin>>add;
        if(add=="共生"){score+=gongsheng*0.3;history[i]=add;i++;}
        if(add=="紧急共生"){score+=gongsheng;history[i]=add;i++;}
        if(add=="巢穴"){score+=chaoxue*0.3;history[i]=add;i++;}
        if(add=="紧急巢穴"){score+=chaoxue;history[i]=add;i++;}
        if(add=="据险固守"){score+=juxiangushou*0.3;history[i]=add;i++;}
        if(add=="紧急据险固守"){score+=juxiangushou;history[i]=add;i++;}
        if(add=="领地意识"){score+=lingdiyishi*0.3;history[i]=add;i++;}
        if(add=="紧急领地意识"){score+=lingdiyishi;history[i]=add;i++;}
        if(add=="溟痕乐园"){score+=minghenleyuan*0.3;history[i]=add;i++;}
        if(add=="紧急溟痕乐园"){score+=minghenleyuan;history[i]=add;i++;}
        if(add=="失控"){score+=shikong*0.3;history[i]=add;i++;}
        if(add=="紧急失控"){score+=shikong;history[i]=add;i++;}
        if(add=="育生池"){score+=yushengchi*0.3;history[i]=add;i++;}
        if(add=="紧急育生池"){score+=yushengchi;history[i]=add;i++;}
        if(add=="好梦在何方"){score+=haomengzaihefang*0.3;history[i]=add;i++;}
        if(add=="紧急好梦在何方"){score+=haomengzaihefang;history[i]=add;i++;}
        if(add=="机械之灾"){score+=jixiezhizai*0.3;history[i]=add;i++;}
        if(add=="紧急机械之灾"){score+=jixiezhizai;history[i]=add;i++;}
        if(add=="水火相容"){score+=shuihuoxiangrong*0.3;history[i]=add;i++;}
        if(add=="紧急水火相容"){score+=shuihuoxiangrong;history[i]=add;i++;}
        if(add=="深度认知"){score+=shendurenzhi*0.3;history[i]=add;i++;}
        if(add=="紧急深度认知"){score+=shendurenzhi;history[i]=add;i++;}
        if(add=="真相"){score+=zhenxiang;history[i]=add;i++;}
        if(add=="无漏真相"){score+=zhenxiang*2;history[i]=add;i++;}
        if(add=="跳舞"){score+=tiaowu;history[i]=add;i++;}
        if(add=="完美跳舞"){score+=tiaowu*2;history[i]=add;i++;}
        if(add=="鸭本运作"){score+=yabenyunzuo;history[i]=add;i++;}
        if(add=="鸭子"){score+=yazi;history[i]=add;animal++;i++;}
        if(add=="熊"){score+=xiong;history[i]=add;animal++;i++;}
        if(add=="狗"){score+=gou;history[i]=add;animal++;i++;}
        if(add=="先遣小队"){score+=302;history[i]=add;i++;}
        if(add=="1"){
            //score+=5;//阶段2启用
            node++;
        }
    }
    score*=1.5;//阶段3启用
    cout<<"寄在道中（0）通过结局（1）"<<endl;
    cin>>j;
    if(j==0){
        ending=4;
        cout<<"请输入寄的关卡名称"<<endl;
        cin>>operation;
        if(operation=="共生"){score-=gongsheng*0.3*1.5/2;}
        if(operation=="紧急共生"){score-=gongsheng*1.5/2;}
        if(operation=="巢穴"){score-=chaoxue*0.3*1.5/2;}
        if(operation=="紧急巢穴"){score-=chaoxue*1.5/2;}
        if(operation=="据险固守"){score-=juxiangushou*0.3*1.5/2;}
        if(operation=="紧急据险固守"){score-=juxiangushou*1.5/2;}
        if(operation=="领地意识"){score-=lingdiyishi*0.3*1.5/2;}
        if(operation=="紧急领地意识"){score-=lingdiyishi*1.5/2;}
        if(operation=="溟痕乐园"){score-=minghenleyuan*0.3*1.5/2;}
        if(operation=="紧急溟痕乐园"){score-=minghenleyuan*1.5/2;}
        if(operation=="失控"){score-=shikong*0.3*1.5/2;}
        if(operation=="紧急失控"){score-=shikong*1.5/2;}
        if(operation=="育生池"){score-=yushengchi*0.3*1.5/2;}
        if(operation=="紧急育生池"){score-=yushengchi*1.5/2;}
        if(operation=="好梦在何方"){score-=haomengzaihefang*0.3*1.5/2;}
        if(operation=="紧急好梦在何方"){score-=haomengzaihefang*1.5/2;}
        if(operation=="机械之灾"){score-=jixiezhizai*0.3*1.5/2;}
        if(operation=="紧急机械之灾"){score-=jixiezhizai*1.5/2;}
        if(operation=="水火相容"){score-=shuihuoxiangrong*0.3*1.5/2;}
        if(operation=="紧急水火相容"){score-=shuihuoxiangrong*1.5/2;}
        if(operation=="深度认知"){score-=shendurenzhi*0.3*1.5/2;}
        if(operation=="紧急深度认知"){score-=shendurenzhi*1.5/2;}
        if(operation=="真相"){score-=zhenxiang*1.5/2;}
        if(operation=="跳舞"){score-=tiaowu*1.5/2;}
        if(operation=="鸭本运作"){score-=yabenyunzuo*1.5/2;}//阶段3启用
    }
    cout<<"请输入选手藏品数量"<<endl;
    cin>>m;
    score+=m*10;
    for(;ending!=4;n++){
        cout<<"请换行输入选手结局"<<endl;
        cout<<"海沫=0，骑士=1，大蒂=2，误入奇境=3,停止=4"<<endl;
        cin>>ending;
        if(ending==-1){break;}
        if(ending==1){score+=200;}
        if(ending==2){score+=80;}
        if(ending==3){score+=150;}
    }
    n--;
    //if(n==3){score+=150;}//阶段2、3关闭
    cout<<"请输入结算分数"<<endl;
    cin>>system;
    score+=system;
    if(j!=0) {
        cout << "选手" << name << "的得分是" << "\t" << score << "!" << "\t" << "共经历" << node + i - animal
             << "个节点" << endl;
        for (i = 0; history[i] != "blank"; i++) {
            cout << "通过" << history[i] << "\t";
        }
    }
    if(j==0){
        cout << "选手" << name << "的得分是" << "\t" << score << "!" << "\t" << "共经历" << node + i - animal
             << "个节点" << endl;
        for (k = 0; k<i-1; k++) {
            cout << "通过" << history[k] << "\t";
        }
        cout<<endl<<"寄在"<<"\t"<<">>"<<operation<<"<<\t"<<"警钟长鸣";
    }
}