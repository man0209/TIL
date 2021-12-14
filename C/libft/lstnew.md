# lstnew.c
```
t_list *ft_lstnew(void *content);
```
- content : 새로운 요소에 들어갈 content
- 반환값 : 새로운 요소 (element)
- malloc을 통해 메모리를 할당하고 새로운 요소를 반환합니다. 요소 내의 변수 'content'는 인자로 받아온 'content'로 초기화되어야 합니다.
- 요소 내의 변수 'next'는 NULL로 초기화되어야 합니다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
```
</details>
