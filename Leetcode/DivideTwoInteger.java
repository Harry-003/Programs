class Solution {
    public int divide(int dividend, int divisor) {
        if (divisor == Integer.MIN_VALUE) {
            return dividend == Integer.MIN_VALUE ? 1 : 0;
        }

        if (dividend == 0) {
            return 0;
        }

        if (dividend == Integer.MIN_VALUE) {
            if (divisor == 1) {
                return Integer.MIN_VALUE;
            } else if (divisor == -1) {
                return Integer.MAX_VALUE;
            }
        }

        long x = dividend;
        long y = divisor;

        boolean sign = false;
        if ((x > 0 && y < 0) || (x < 0 && y > 0)) {
            sign = true;
        }

        x = x > 0 ? x : -x;
        y = y > 0 ? y : -y;

        long ans = div(x, y);
        if (ans > Integer.MAX_VALUE || ans < Integer.MIN_VALUE) {
            return Integer.MAX_VALUE;
        }

        return (int) (sign ? -ans : ans);
    }

    public long div(long dividend, long divisor) {
        if (dividend < divisor) {
            return 0;
        }

        long ans = 1;
        long temp = divisor;

        while ((temp + temp) <= dividend) {
            ans = ans << 1;
            temp = temp << 1;
        }

        return ans + div(dividend - temp, divisor);
    }
}