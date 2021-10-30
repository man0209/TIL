# String( )

-   파라미터 값을 String타입으로 변환하여 반환.
    -   값이 없으면 빈 문자열 반환
    -   ex) `var value = String(123);` -> 123 반환.

# length

-   문자 수 반환.
    -   ex) `var value = "ABC";` <br>
        `console.log(value.length)` -> 3 출력
-   length 값이 반환되는 원리
    -   value.length를 실행시키면 자바스크립트 엔진 내부에서 변수 value의 타입을 구한 후 여기서는 문자열이니까 new String()으로 임시로 인스턴스 생성. <br>
        할당한 "ABC"값이 해당 인스턴스의 PrimitiveValue에 설정. <br>
        그리고 PrimitiveValue를 보고 length값 생성.

# trim()

-   문자열 앞뒤의 화이트 스페이스 삭제.
    -   ex) `var value = " abcd ";` <br>
        `console.log(value.trim())` -> abcd 출력 <br>
        `console.log(value.trim().length);` -> 4 출력
    -   `console.log(value.trim().length);` 이와 같이 .으로 계속 연결되는 형태를 메소드 체인이라 한다.
