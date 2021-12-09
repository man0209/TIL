# strtrim.c
```
char  *strtrim(char const *s1, char const *set);
```
- s1 : 양 쪽을 잘라낼 원본 문자열
- set : 제거해야 될 문자들
- 반환값 : 문자가 제거된 문자열. 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 's1'의 양 쪽 끝에서 'set'에 지정된 문자들이 제거된 문자열 사본을 반환
