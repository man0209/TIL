# Object (객체)
- 복합 데이터
```
{
  id : 1234,
  key : value // value 에는 원시(primitive)값과 다른 객체(object)가 올 수 있다.
}
```
- 객체는 call by reference.
- 서로 연관있는 속성(데이터(property)) 과 행동(함수(method)) 을 묶어 줌. 즉, 밀접하게 관련 있는 상태(속성)와 행동을 객체로 묶자!

# Object literal { key : value }
  - key : 문자, 숫자, 문자열, 심볼타입
  - value - 원시값, 객체 (함수)
   ```
  - let apple = 
  - {
  -   name : 'fruit',
  -   'hello-bye' : qq, // 문자열 (안쓰는게 좋음)
  -   0 : 1, // 숫자
  -   ['hello-bye1'] : saw, // 대괄호 안에 문자열
  - };
   ```
  - 객체 안 데이터에 접근하기 위해서는 apple.name, apple.['name'](' ' 꼭 써줘야 함),  , key에 특수문자가 있을 경우 ['hello-bye1'] 대괄호 표기법으로 접근가능.
  - apple.emoji 로 새로운 속성 생성 가능.
  - delete apple.emoji 로 속성 삭제 가능.

# new Object( )
- 생성자 함수를 통해 객체 생성 가능. 함수처럼 자주 사용되는 객체 템플릿(붕어빵 판)을 만들고 new [생성자 함수] 로 객체 생성.
- 생성자 함수 이름 첫글자는 `대문자` ex) function fruit(X), function Fruit(O)
- 객체 안에서 자기 자신의 속성(property)에 접근할 때는 this. 로 접근
![image](https://user-images.githubusercontent.com/69157076/166903873-27f9d75b-6066-4781-8af5-52cd9cc0c49a.png)


# Object. create( );

# 객체에 동적으로 접근하기
- 함수의 매개변수로 객체에 접근할 때는 apple[name] 와 같이 사용해야 한다.

![image](https://user-images.githubusercontent.com/69157076/166887618-a634448a-8dcb-43ad-9189-21df0a8af740.png)
![image](https://user-images.githubusercontent.com/69157076/166887648-563ce33c-eabe-44ec-8fcc-fa10e283c386.png)
