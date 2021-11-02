# indexOf(a, b(opt))

-   배열에 a가 있으면 해당 인덱스를 반환
-   왼쪽에서 오른쪽으로 검색
-   같은 값을 찾으면 종료, 즉 중복된 값이 있어도 1개만 검색
    -   `let value = [1,2,5,4,5];` <br>
        `console.log(value.indexOf(5));` / 2 반환
-   데이터 타입까지 확인
    -   `let value = [1,2,3,4,5];` <br>
        `console.log(value.indexOf("5"));` / -1 반환
-   같은 값이 없으면 -1 반환
-   b는 옵션이고 해당 값의 인덱스부터 검색 시작
    -   `let value = [1,2,5,2,5];` <br>
        `console.log(value.indexOf(5,3));` / 3번째 인덱스부터 검색 시작 / 4 반환
-   String 과 Array의 indexOf( ) 차이
    -   `console.log("ABCBC".indexOf("C", -2));`
        -   문자열 indexOf의 경우 두번 째 파라미터가 음수일 경우 자동으로 0으로 바꿔준다
    -   `let list = ["A", "B", "C", "B", "C"];` <br>
        `console.log(list.indexOf("C", -2));`
        -   Array의 경우 두번 째 파라미터가 음수일 경우 배열의 length길이를 더한 값으로 바뀐다.
        -   위의 경우 length = 5, 두번 째 파라미터 값 = -2 이므로 5 - 2 = 3으로 바뀐다
        -   따라서 2가 아닌 4를 반환한다.

# lastIndexOf(a, b(opt))

-   배열에 a가 있으면 가장 마지막 인덱스를 반환
    -   `let value = [1,2,5,2,5];` <br>
        `console.log(value.lastIndexOf(5));` / 2 가 아닌 4를 반환
-   나머지는 indexOf()와 같다

# forEach(fn(함수), this로 참조할 오브젝트(opt))

-   배열의 엘리먼트를 하나씩 읽어 가면서 콜백 함수 호출
-   콜백 함수는 forEach 내부에 만들지 말고 따로 분리해서 만들도록 하자
-   콜백 함수는 총 3개 `function fn(element, index, all){}` 를 가지고 있다
-   forEach( )는 break, continue 문 사용 불가 즉, 중간에 멈출 수 없다
-   this로 참조할 오브젝트는 forEach( )의 파라미터로 전달되지 않는다. 만약 오브젝트를 두번 째 파라미터로 작성할 경우, forEach( )내부에서 this로 접근할 수 있다

# filter(fn(함수), this로 참조할 오브젝트(opt) )

-   배열의 엘리먼트들을 차례로 하나씩 읽어가면서 콜백 함수에서 true를 반환하면 현재 읽은 엘리먼트를 반환한다 (배열로 반환)
    -   `let value = [10,20,30,40];` <br>
        `let fn = function(el, index, all){`<br>
        `return el > 15;` <br>
        `};` <br>
        `let result = value.filter(fn);` / [20,30,40] 반환
-   조건에 맞는 엘리먼트를 추려낼 때 사용하기 좋다
