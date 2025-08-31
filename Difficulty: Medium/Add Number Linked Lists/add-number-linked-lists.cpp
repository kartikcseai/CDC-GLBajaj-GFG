class Solution {
public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // Step 1: Convert both linked lists to strings
        string num1 = "", num2 = "";
        Node* curr1 = head1;
        while (curr1) {
            num1 += to_string(curr1->data);
            curr1 = curr1->next;
        }
        Node* curr2 = head2;
        while (curr2) {
            num2 += to_string(curr2->data);
            curr2 = curr2->next;
        }
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        string sum = "";
        while (i >= 0 || j >= 0 || carry) {
            int s = carry;
            if (i >= 0) s += num1[i--] - '0';
            if (j >= 0) s += num2[j--] - '0';
            sum.push_back((s % 10) + '0');
            carry = s / 10;
        }
        reverse(sum.begin(), sum.end());
        int start = 0;
        while (start < sum.size() - 1 && sum[start] == '0') start++;
        sum = sum.substr(start);
        Node* result = new Node(sum[0] - '0');
        Node* curr = result;
        for (int k = 1; k < sum.size(); k++) {
            curr->next = new Node(sum[k] - '0');
            curr = curr->next;
        }
        return result;
    }
};
