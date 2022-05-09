# Class 란?
- 생성자 함수와 마찬가지로 객체를 생성할 수 있는 템플릿(청사진, 틀) // 간단하게 붕어빵 만드는 틀(Class) , 붕어빵(객체)
- JS에서는 생성자 함수를 쓸 수도 있고 Class도 쓸 수 있지만 최신 자바스크립트에서는 생성자 함수 사용 X, 현업에서도 사용 X 고로 Class를 사용하자!

---
- class 를 만들 때는 항상 class 키워드를 이용해 class를 만들 수 있다.
- 각각의 class에는 생성자 함수가 있다.
- new 키워드로 객체를 생성할 때 해당 class 내의 생성자가 호출이 되고 이 생성자에는 우리가 객체를 만들 때 필요한 데이터를 인자로 외부에서 받아올 수 있는 형태로 되어있다(함수처럼)
- 어떤 class에 의해 만들어진 객체를 해당 class의 인스턴스라 한다.

![image](https://user-images.githubusercontent.com/69157076/167397788-927acda1-4bdd-40bf-8e18-94c8f0f9eb56.png)

![image](https://user-images.githubusercontent.com/69157076/167397868-3f4f7f34-9b99-4e79-85ca-34e5ef0d0046.png)

# 정적 메서드
- class 내부에 함수 이름 앞에 static을 붙여서 정적 메서드를 만들 수 있다. // ex) static display( ) {}
- 이 정적 메서드는 class의 인스턴스에선 접근 불가하고, 오로지 class에서만 접근 가능하다. 인스턴스에 포함되지 않음.
- C언어의 static 함수와 비슷한 것 같다. C언어의 static 함수도 다른 소스파일에서 해당 함수에 접근 못하게 하기 때문이다. 함수 이름 중복으로 인한 컴파일 오류 뭐 여러 이유가 있겠지만?
- 모든 객체마다 동일하게 참조해야 할 속성이나 행동이 있을 때 사용.

![image](https://user-images.githubusercontent.com/69157076/167409602-b6eee575-ce29-4cd4-ba13-26a39ff9e0f5.png)

# 접근제어자 - 캡슐화
-  다른 언어에는 private(외부에서 접근 불가능), public(외부에서 접근 가능), protected(외부에서는 볼 수 없지만 상속된 자식 클래스에서만 접근 가능). 이 3가지로 접근 제어를 컨트롤 할 수 있지만 자바스크립트에는 없다.
-  자바스크립트에서 public은 기본이고 private을 하기 위해선 #을 인자 앞에 붙여주면 된다. 

![image](https://user-images.githubusercontent.com/69157076/167415755-72f2cee6-e19e-42e5-9573-96f7a01a46ad.png)


![image](https://user-images.githubusercontent.com/69157076/167415628-99935567-e28c-4542-93ba-1a1ec1bfcf00.png)

# 게터(getter)와 세터(setter)
- 접근자 프로퍼티 (Accessor Property) - 프로퍼티에 접근하는 거다. 
- class의 프로퍼티(변수)처럼 보이지만 실제로는 함수. 
- 인스턴스에서 함수로 접근할 때 student.display() . 게터를 쓰면 student.display 마치 프로퍼티에 접근하는 것 처럼 접근 가능.
- 게터는 해당 함수를 호출하면 호출
- 세터는 해당 함수의 값을 바꾸면 호출. 세터는 입력 값을 조건에 맞게 변경할 때 쓰인다. (0이하의 값은 0으로 설정)
- .으로 읽게되면 get 호출, 할당하게되면 set 호출
- 무언가 조합해서 만들거나 get, set을 이용해 특정한 일을 더 하고 싶을 때 사용.

![image](https://user-images.githubusercontent.com/69157076/167441433-08e0da58-6566-4358-9026-ceccf121b011.png)

![image](https://user-images.githubusercontent.com/69157076/167442488-64c98ebf-5084-4bec-929e-25c2063b44e4.png)

