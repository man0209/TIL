# Number(x)

-   x값을 Number 타입으로 바꿔준다.
-   x값이 String 타입이어도 숫자이면 변환 가능
    -   ex) Number(123) -> 123
    -   ex) Number('123') -> 123
-   x값이 비어 있으면 0을 반환
    -   ex) Number() -> 0;
-   x값이 String이면 NaN(Not a Number) 반환
    -   ex)Number('AB') -> NaN

## Number 상수

-   Number.MAX_VALUE = 1.7976931348623157 \* 10(308승)
-   Number.MIN_VALUE = 5 \* 10(-324승)
-   Number.NaN = Not a Number
-   Number.POSITIVE_INFINITY = infinity
-   Number.NEGATIVE_INFINITY = -infinity

1. 상수는 값을 변경, 삭제할 수 없다.
1. 영문 대문자 사용이 관례

# 인스턴스 생성 (new 연산자)

-   new연산자를 사용해 Object를 복사(인스턴스를 생성)하는 개념.
    -   ex) var obj = new Number()
        -   new 연산자를 사용해 Number 오브젝트를 복사(인스턴스를 생성) 여기서 복사된 것을 인스턴스라 부름. obj변수에 인스턴스 할당
        -   코딩 관례로 new 연산자 뒤에 오는 Object의 첫 문자는 대문자로 작성.

# 인스턴스 형태

-   var obj = new Number("123")
    -   위를 실행하여 변수 obj에 인스턴스를 할당하면 obj에는 Number오브젝트의 prototype(`Number.prototype`)에 연결된 프로퍼티(메소드)로 인스턴스를 생성한다.
    -   그리고 `obj.__proto__`에 `Number.prototype`에 연결된 프로퍼티가 설정된다.
    -   `obj.__proto__`에는 `Number.prototype`연결된 프로퍼티가 설정.
    -   `Number.prototype`에는 `Object.prototype`연결된 프로퍼티가 설정.
    -   global Object 에서 Number로 그리고 obj로 이것이 상속? 인 것 같다.

![인스턴스 프로토타입](https://github.com/man0209/TIL/blob/main/Javascript/image/%EC%9D%B8%EC%8A%A4%ED%84%B4%EC%8A%A4%20%ED%98%95%ED%83%9C.png?raw=true)

# toString()

-   data를 String 타입으로 변환
    -   ex) `var value = 20;` <br>
        `console.log(20 === value.toString())` -> false
-   파라미터에 진수를 입력하면 맞는 값 반환.
    -   진수(2~36), default : 10진수
    -   ex) `console.log(value.toString(16))` <br>
        20을 16진수르 변환한 값 -> 14 반환.

# toFixed()

-   고정 소숫점 표기로 변환하여 문자열 반환.
-   파라미터에 소수 이하 자릿수 작성 (0 ~ 20까지)
    -   ex) `var value = 1234.567;` <br>
        `console.log(value.toFixed(2))` -> 1234.57 / 소수 세번째(2 + 1) 자리에서 반올림 된 소수 두번째 자리까지 출력.
    -   ex) `console.log(value.toFixed())` -> 1235 / 파라미터 값을 작성하지 않으면 0으로 간주하여 소수 첫째 자리에서 반올림하여 출력.
    -   ex) `console.log(value.toFixed(5))` -> 소수 자릿수보다 파라미터 값이 크면 나머지는 0으로 채워 반환 1234.56700
