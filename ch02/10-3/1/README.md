- Container는 데이터 저장  , iterator는 데이터접근 , algorithm은 데이터처리 역할을 함

- 공통점으론 원소에 접근할 수 있지만 iterator는 클래스임

- erase는 매개변수는 (iterator it)이며 it이 가리키는 원소 삭제 후 다음 원소 주소를 리턴하고 벡터에서 it이 가리키는 원소 삭제 및 삭제 후 자동으로 벡터 조절하는 기능을 함, insert는 매개변수가 (iterator it, element) 이며 리턴값은 삽입된 원소의 포인터를 리턴함 , 벡터 내 it 위치에  element 삽입하는 기능을 함

- 반환하며 반복를 반환함

- 컴파일 과정에서 오류가 발생할 것임
