# Method
- GET(서버로부터 무언가를 얻는 것이 목적)
  - 클라이언트가 서버에게 어떤 데이터를 보내달라고 요청(html, CSS, JS)
  - 예를 들어 네이버에서 하늘을 검색하면 `https://search.naver.com/search.naver?where=nexearch&sm=top_hty&fbm=0&ie=utf8&query=하늘` 이런식으로 url 뒤에 검색어가 붙어서 서버로 요청 전달
  - 하지만 url 길이에 제한이 있어 많은 데이터를 전송하는건 목적에 부합하지 않는다.
  - 그리고 중요한 데이터 (비밀번호...)를 GET으로 보내게되면 노출이 쉽게 되기 때문에 위험하다.
  - ![image](https://user-images.githubusercontent.com/69157076/175317314-766b563a-fc0c-4375-a0dd-48474fbd7273.png)

- HEAD
  - 페이지를 보내달라기 보다는 그 페이지의 정보?만 따로 요청
  - ![image](https://user-images.githubusercontent.com/69157076/175317528-214578bd-7e1e-4f20-8491-d4815d16ce9b.png)
- PUT
  - 클라이언트가 서버에 특정 자원을 업로드할 때 사용
  - ![image](https://user-images.githubusercontent.com/69157076/175318254-aff79728-3667-497b-b26e-f3d5921208d9.png)

- POST (서버에다가 데이터를 주는게 목적)
  - 클라이언트가 서버에 어떤 정보(데이터)를 보낼 때 사용
  - 데이터 전송 길이에 대한 제한이 없음
  - HTTP REQUEST BODY에 데이터를 담으므로 노출 안됨, 보안성이랑은 상관 없음. 암호화를 할 수 있는 프로토콜이 추가되어야 안전.
  - HTTPS = HTTP + SSL(secure socket layer), 서버에 SSL을 추가해야 안전. 
  - PUT vs POST
    - PUT은 서버의 Resource에 Data를 저장하기 위한 용도
    - POST는 서버에 DATA를 보내기 위한 용도   
  - ![image](https://user-images.githubusercontent.com/69157076/175318395-7b2c4972-41fc-4f96-94d0-13095af248e4.png)

- DELETE
  - 서버에서 문서를 제거하기 위해 사용 
