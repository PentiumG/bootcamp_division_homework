반갑습니당 저는 해달 준회원 김재원 입니다.

헷갈려서 적는 노트
git init 해당 파일을 깃이 관리하라는 명령어
git add는 git이 관리할 수 있게 해주는 명령어
git commit은 현재 상태를 git에 저장하게 해주는 명령어
=> git commit -m 한줄평

즉, 새로추가 = add
    저장하기 = commit


1. Git Repository 확인하기 : $ git remote
2. Git Repository 추가하기 : $ git remote add <단축이름> <url>
3. Git Repository 가져오기 : $ git fetch <Repository alias> <branch>또는 $ git pull <Repository alias> <branch>
4. Git Repository에 수정사항 저장하기 : $ git push <Repository alias> <branch>
5. Git Repository 확인하기 : $ git remote show <Repository alias>
6. Git Repository 이름 변경하기 : $ git remote rename <현재 Repository alias>
7. Git Repository 삭제하기 : $ git remote remove <Repository alias> 또는 $ git remote rm <Repository alias>