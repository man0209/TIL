# Makefile
- 리눅스상에서 반복적으로 발생하는 컴파일을 쉽게하기위해서 사용하는 make 프로그램의 설정 파일이다.
- Makefile을 통하여 library 및 컴파일 환경을 관리 할 수 있다.

# 컴파일이란?
- 
# 기본 구조
- Makefile의 기본 구조는 매크로 정의, 룰, 명령어로 되어있다.
	- CC = gcc / 매크로 정의
	- target1 : dependency1 (space) dependency2    /룰1
		- (tab) command1 <br>
		- (tab) command2 /명령
	- target2 : dependency3 (space) dependency4    /룰2
		- (tab) command1 <br>
		- (tab) command2 /명령

# Makefile에서의 매크로의 종류 (여기서는 C만)
- CC = 컴파일러를 변경할 때 사용. 리눅스에서는 gcc
- CFLAGS = gcc의 옵션을 추가 할 때 사용한다. ex) -werror -wextra ...
- DEFS = Define 추가 할 때 사용한다.

# ar(아카이브)
- 기록보관소? 여기서는 .o(오브젝트) 파일들을 하나로 묶어 정적 라이브러리(리눅스에선 .a)로 만들기 위한 명령어.
- ar crs [라이브러리 이름] [오브젝트 파일들]
	- r : 