// cypher.c
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// Caesar ��ȣ �Լ�
void cypher(char* msg, int sft) {
    char ch;
    int i;

    for (i = 0; msg[i] != '\0'; ++i) {
        ch = msg[i];

        // �빮�� ��ȣȭ
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + sft + 26) % 26) + 'A';
            msg[i] = ch;
        }
        // �ҹ��� ��ȣȭ
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + sft + 26) % 26) + 'a';
            msg[i] = ch;
        }
        // ���ĺ��� �ƴϸ� �״�� ��
    }
}

int main(void) {
    // ����ڷκ��� �޽��� �ޱ�
    char message[100];
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // �ٹٲ� ���� ����
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    // ����Ʈ �� �Է�
    int shift;
    printf("Enter shift value: ");
    scanf_s("%d", &shift);

    // ��ȣȭ ����
    cypher(message, shift);

    // ��� ���
    printf("Encrypted! %s\n", message);
    return 0;
}
