"""
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
"""

def main():
    # 이곳에 코드를 작성해주세요!
    n = int(input())
    if 12 <= n <= 23:
        print("PM")
    elif 0 <= n < 12:
        print("AM")

    return


if __name__ == '__main__':
    main()