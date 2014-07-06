#define t(x)#x
#define q(x)t(x)
#define s typedef char h;e(){putchar(10);}f(p){puts(p);}r(h*p){h*a=p+strlen(p);while(a-->p)putchar(*a);if(*p<100)e();}main(n){h s[4];h*a="#define t(x)#x";h*b="#define q(x)t(x)";h*c="#define s ";h*d="char*p=q(s);s";n=atoi(gets(s));if(n<0)while(n++){e();r(d);r(p);r(c);r(b);r(a);}else while(n--){e();f(a);f(b);printf(c);f(p);f(d);}exit(0);}
char*p=q(s);s
