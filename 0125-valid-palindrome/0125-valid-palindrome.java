class Solution {
    public boolean isPalindrome(String s) {
        String t=s.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
        String rs= new StringBuilder(t).reverse().toString();
        return rs.equals(t);
    }
}
