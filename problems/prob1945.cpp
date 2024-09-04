class Solution {
public:
    int getLucky(string s, int k) {
        // a ascii = 97
        // 0 ascii = 48

        int transformed_string=0;
        string converted_string = convert(s);
        transformed_string = transform(converted_string);

        while(k>1){
            converted_string = to_string(transformed_string);
            transformed_string = transform(converted_string);
            s=to_string(transformed_string);
            cout << s << endl;
            k--;
            //adjust for k
        }
        return transformed_string;
    }

    string convert(string s){
        string temp_str;
        int temp_int;
        for(int i=0;i<s.size();i++){
            temp_int = int(s[i])-96;
            temp_str.append(to_string(temp_int));
        }
        return temp_str;
    }

    int transform(string s){
        int temp_int=0;
        for(int i=0;i<s.size();i++){
            temp_int += int(s[i])-48;
        }
        return temp_int;
    }
}
