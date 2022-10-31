public int rotatedWords(String input1, int input2) {
    int count = 0;
    String arr[] = input1.split(" ");
    if (input1 != null && !input1.isEmpty()) {
        for (int i = 0; i < arr.length; i++) {
            String s1 = arr[i] + arr[i];
            int start = arr[i].length() - input2;

            System.out.println("arr[i] : " + arr[i]);
            String s2 = s1.substring(start, start + arr[i].length());
            System.out.println("s2 : " + s2);
            if (s2.equalsIgnoreCase(arr[i])) {
                count++;
            }
        }
    }
    return count;
}
