
int main(void)
{
    int Tasuke, Hanazawa, Jyaian;
    
    Tasuke = 20;    //太助の年齢
    Hanazawa = 50; //花沢の年齢
    Jyaian = 19;   //ジャイアンの年齢
    
    //　変数と定数の比較
    if(Tasuke == 20)
       printf("太助は２０歳です\n");
    if(Hanazawa != 20)
       printf("花沢は２０歳ではありません\n");
    if(Jyaian < 20)
       printf("ジャイアンは２０歳未満です\n");
       
    // 変数と変数の比較
    if(Tasuke>Jyaian)
       printf("太助はジャイアンより年上です\n");
    if(Hanazawa>Tasuke)
       printf("花沢は太助より年上です\n");
       
    return 0;
}