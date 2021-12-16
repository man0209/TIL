# atoi.c
```
int atoi(const char *str);
```
- 문자형 정수를 int형 정수로 바꿔주는 함수.
- 반환값 : int형 정수(10진수) or 0(숫자문자를 한개도 못읽었을 경우)
- 첫번째로 나타나는 비 - 공백 문자가 숫자 혹은 + 나 - 가 아니라면 어떠한 변환도 이루어 지지 않는다.
- 문자열이 공백 문자로만 이루어져 있어도 변환이 이루어 지지 않는다.
- 만일 변환을 하였지만 그 값이 표현 가능한 범위를 벗어난다면 INT_MAX혹은, INT_MIN이 리턴된다.
- LONG 오버플로우 값(9223372036854775807)이 들어오면 -1 리턴.
- LONG 언더플로우 값(-9223372036854775808)이 들어오면 0 리턴.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
static int	is_space(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' \
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	atoi(const char *str)
{
	long long	minus;
	unsigned long long	result;

	minus = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		if (result > 9223372036854775807 && minus == 1)
			return (-1);
		else if (result > 9223372036854775807 && minus == -1)
			return (0);
		str++;
	}
	return ((int)(result * minus);
}
```
</details>

