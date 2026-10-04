- 셸 변수와 달리 환경 변수는 외부 명령어에서도 참조할 수 있는 셸 변수이다. 
- <img width="1099" height="272" alt="image" src="https://github.com/user-attachments/assets/25353a33-f3ea-4368-8aaf-5d9a8a36b287" />
  PS1은 셸의 프롬프트 문자열을 정의하는 셸 변수이고 , PATH는 명령어의 위치를 찾는 경로가 저장되어 있고 , SHELL은 로그인 셸의 경로를 나타내고 , LANG은 시스템의 기본 언어와 지역 설정을 지정하는 변수이다.
- PATH에 등록된 디렉터리들을 탐색하여 찾는다.
- 여러개의 명령어를 포함한 파일로 셸에서 여러개의 명령어를 한번에 실행할때 사용하는 것이다.
- source , ./파일이름.sh , bash 파일이름.sh 이가 있다.
- <img width="428" height="79" alt="image" src="https://github.com/user-attachments/assets/1bd8beb3-d117-4c36-9d83-af9b80458a35" /> , <img width="289" height="23" alt="image" src="https://github.com/user-attachments/assets/ebb509a5-c2de-4834-80a7-11a212a2fc45" />
- 큰 따옴표가 아니라 작은 따옴표를 한다면 $PATH가 문자열 그대로 저장되어 $PATH:~/bin 의 형태의 문자열로 저장된다.

