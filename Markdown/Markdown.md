# Markdown Open preview

-   vsc에 내장되어 있는 Markdown Open preview를 이용하면 실시간으로 내가 작성하는 내용들을 확인해 볼 수 있다.

<!-- Heading -->

# Heading 1

## Heading 2

### Heading 3

#### Heading 4

##### Heading 5

###### Heading 6

-   총 6가지의 Heading 이 있다.
-   Heading 1 아래에는 수평선이 자동으로 추가 된다. 만약 따로 추가하고 싶으면 \_\_\_(언더스코어) 추가하면 수평선이 추가 된다.

# lINE

```
___
```

# Text attributes

This is the **bold** text and this is the _italic_ text and let's do ~~strikethrough~~.

# Block quote (인용상자)

> Don't forget to code

# list

## Unordered

-   Item1

*   Item2
    -   Item2a

## Ordered

1. Item1
1. Item2
1. Item3
    1. Item 3a

# Link

Click [here](https://github.com/man0209/TIL)

-   [] 대괄호 안에 원하는 단어나 문장 작성
-   () 소괄호 안에 url 작성

# Image

## 첫번째 방법

![설명](이미지 링크)

-   느낌표 옆 대괄호 안에 이미지에 대한 설명 작성
-   소괄호 안에 이미지 링크 추가

## 두번째 방법

<a href="#"><img src="https://github.com/..각자절대경로../images/markdown_syntax.jpg" width="400px" alt="sample image"></a>
Format: img 태그 사용 - 이미지경로는 상대경로 or 절대경로

# Code blocks

```javascript
console.log('Hello world');
```

-   `(빽틱)세 개로 코드를 감싸면 코드블럭이 만들어진다.
-   해당 코드의 언어를 표현해주면 (Ex. java, javascript, kotlin...) 문법이 하이라이트 된다.

# Task list(체크 박스)

-   [x] this is a complete item
-   [ ] this is an incomplete item
-   [x] @mentions, #refs, [links](), **formatting**, and <del>tags</del> supported
-   [x] list syntax required (any unordered or ordered list supported)

s
