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

# indexOf()

-   파라미터 문자가 인덱스에 있으면 첫 번째 해당 인덱스를 반환. (검색은 왼쪽에서 오른쪽으로)
    -   ex) `var example = "123426";` <br>
        `console.log(example.indexOf(2));` / 1 반환 / 1번째 인덱스에 2가 있으므로
-   없으면 -1 반환
    -   ex) `console.log(example.indexOf(8));` / -1 반환 / 8이 example 에 없으니까
-   두번째 파라미터로 검색을 시작하는 인덱스를 지정할 수 있다.
    -   ex) `console.log(example.indexOf(2,3));` / 문자 2를 3번째 인덱스부터 검색, 4 반환
-   두번째 파라미터가 length보다 크면 -1 반환
    -ex) `console.log(example.indexOf(2,10));` / 10이 example.length보다 크니까 -1 반환
-   두번째 파라미터가 음수이면 0번 째 인덱스부터 시작.
-   두번째 파라미터가 NaN이면 0부터 시작.

# toUpperCase()

-   영문 소문자를 대문자로 변환
    -   ex) `console.log("abcde".toUpperCase());` / ABCDE

# toLowerCase()

-   영문 대문자를 소문자로 변환
    -   ex) `console.log("ABCDE".toLowerCase());` / abcde

# substring(a,b)

-   a인덱스부터 b인덱스 전까지 즉 (b-1) 까지
    -   ex) `var example = "01234567";` <br>
        `console.log(example.substring(2,5));` / 234
-   b를 작성하지 않으면 a부터 끝까지 반환
    -   ex) `console.log(example.substring(2));` / 234567
-   a, b 둘 다 작성하지 않으면 전체 반환
    -   ex) `console.log(example.substring());` / 01234567

# substr(a,b)

-   a인덱스부터 b개 까지
    -ex) `console.log(example.substr(1,4));` / 1234
-   a가 음수이면 length에서 a를 더해 시작 인덱스로 사용
    -ex) `console.log(example.substr(-3,3));` / 567

# slice(a,b)

-   a인덱스부터 b인덱스 전까지
    -   `console.log(example.slice(1,4));` / 123

# split(a)

-   분리 대상을 a(분리자)로 분리하여 **배열**로 반환
    -   ex) `console.log("12_34_56".split("_"));` / \_분리자 [12,34,56]