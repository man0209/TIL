# memset.c
- 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 단위)모두 지정하고 싶을 때 사용하는 함수.
- *b = 채우고자 하는 메모리의 시작 포인터(시작 주소)
-  c = 메모리에 채우고자 하는 값, int형이지만 내부에서는 unsigned char(1 byte)로 변환되어서 저장된다.
-  len = 채우고자 하는 바이트의 수. 즉, 채우고자 하는 메모리의 크기  
- 메모리 블록을 채우는 기준은 1byte(8bit)이기 때문에, 0이 아닌 다른 값으로 메모리를 초기화하고자 할 때 문제가 발생할 수 있다.    
- size_t 자료형이란?
	- 부호 없는 정수 자료형.
	- 32비트에서는 4바이트, 64비트에서 8바이트로 정의되어 있다.
	- C언어 표준 함수에서도 크기를 의미하는 매개변수나 반환값은 size_t를 사용하고 있고, <br>CPU비트 수에 맞게 자료형을 제공하고 있으므로,<br>  크기를 의미하는 변수는 unsigned int대신 size_t로 선언하는 것이 좋다.
	- 이론적으로 가능한 오브젝트의 최대 크기를 저장할 수 있는 타입이며 일반적으로, <br>배열 인덱싱 및 루프 계산에 사용됩니다.
	- (문자열이나 메모리의 사이즈를 나타낼 때 사용)

- *b 를 왜 char가 아닌 unsigned char로 casting하는가?
	- 메모리 주소에 부호있는 정수타입을 쓰면 안된다. 올바르게 동작하지 않고 프로그램이 중단 될 수도 있다.<br> unsigned char을 쓰는 게 관례.	  
  - 특정 아키텍처 cpu(ARM)에서는 char 타입 dafault 가 unsigned char

- *b 와 c 를 왜 unsigned char로 캐스팅 하는가?
	- memset함수는 바이트(8비트)단위로 메모리에 접근하기 때문에 <br>i++를 통해 1바이트 단위로 인덱스를 이동하려면 unsigned char로 캐스팅해야 한다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->


```
void *memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *temp;

	temp = (unsigned char *)b;
	i = 0;
	while(i < len)
		temp[i++] = (unsigned char)c;
	return (temp);
}
```
</details>
