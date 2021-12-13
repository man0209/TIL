# putchar_fd.c
```
void  putchar_fd(char c, int fd);
```
- c : 출력할 문자열.
- fd : 값이 쓰여질 파일 식별자 (file descriptor)
- 반환값 : 없음.
  - 제공받은 파일 식별자에 문자열 's'를 출력합니다.

- 파일 디스크립터란?
  - 시스템이 만들어 놓은 것을 가리키기 좋게 하기 위해 시스템이 우리들에게 건네주는 숫자.
  - 시스템으로부터 할당받은 파일 또는 소켓우 부여된 정수.
  - 일반적으로 파일과 소켓은 함수 호출과 같은 생성과정을 거쳐야 파일 디스크립터가 할당된다.
    - 0 : 표준 입력, 1 : 표준 출력, 2 : 표준 에러 출력.
    - 따라서 파일 오픈 or 소켓생성 시 부여되는 파일 디스크립터는 3부터 시작한다.
    - 리눅스에서는 소켓조작은 파일조작과 동일하게 간주된다. 즉, 리눅스에서는 소켓도 파일처럼 취급한다는 의미로 볼 수 있겠다.
    - 윈도우에서는 리눅스와 달리 파일과 소켓을 구분.
    - 따라서 read 와 write와 같은 파일 입출력 함수를 소켓 입출력, 다시 말해서 네트쿼으상에서의 데이터 송수신에 사용할 수 있다는 것이다.
    - 
  
  
<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);// (fc, buf, size)
}
```
</details>