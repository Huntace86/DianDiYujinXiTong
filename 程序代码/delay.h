// /*------------------------------------------------
//  uS延时函数，含有输入参数 unsigned char t，无返回值
//  unsigned char 是定义无符号字符变量，其值的范围是
//  0~255 这里使用晶振12M，精确延时请使用汇编,大致延时
//  长度如下 T=tx2+5 uS 
// ------------------------------------------------*/
// void DelayUs2x(unsigned char t)
// {   
//  while(--t);
// }
/*------------------------------------------------
 mS延时函数，含有输入参数 unsigned char t，无返回值
 unsigned char 是定义无符号字符变量，其值的范围是
 0~255 这里使用晶振11.0592MHz
------------------------------------------------*/
void DelayMs(unsigned char i)
{   
 unsigned char x,j;
  
  for(j=0;j<i;j++)
    for(x=0;x<=148;x++);
}
