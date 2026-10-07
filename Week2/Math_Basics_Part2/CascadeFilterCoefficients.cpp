#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void fft(vector<complex<double>>& a, bool invert) {
        int n = a.size();

        int j = 0;

        for (int i = 1; i < n; i++) {
            int bit = n >> 1;

            while (j & bit) {
                j ^= bit;
                bit >>= 1;
            }

            j ^= bit;

            if (i < j) {
                swap(a[i], a[j]);
            }
        }

        for (int length = 2; length <= n; length <<= 1) {
            double angle = 2 * acos(-1) / length;

            if (invert) {
                angle = -angle;
            }

            complex<double> wlen(cos(angle), sin(angle));

            for (int i = 0; i < n; i += length) {
                complex<double> w(1);
                int half = length >> 1;

                for (int j = i; j < i + half; j++) {
                    complex<double> u = a[j];
                    complex<double> v = a[j + half] * w;

                    a[j] = u + v;
                    a[j + half] = u - v;

                    w *= wlen;
                }
            }
        }

        if (invert) {
            for (int i = 0; i < n; i++) {
                a[i] /= n;
            }
        }
    }

    vector<long long> cascadeFilterCoefficients(
        vector<int>& firstCoeffs,
        vector<int>& secondCoeffs
    ) {
        int needed = firstCoeffs.size() + secondCoeffs.size() - 1;

        int size = 1;

        while (size < needed) {
            size <<= 1;
        }

        vector<complex<double>> a(size);
        vector<complex<double>> b(size);

        for (int i = 0; i < firstCoeffs.size(); i++) {
            a[i] = firstCoeffs[i];
        }

        for (int i = 0; i < secondCoeffs.size(); i++) {
            b[i] = secondCoeffs[i];
        }

        fft(a, false);
        fft(b, false);

        for (int i = 0; i < size; i++) {
            a[i] *= b[i];
        }

        fft(a, true);

        vector<long long> result(needed);

        for (int i = 0; i < needed; i++) {
            result[i] = llround(a[i].real());
        }

        return result;
    }
};

/*
Input:
firstCoeffs = [1, 2, 3]
secondCoeffs = [4, 5]

Output:
[4, 13, 22, 15]


Input:
firstCoeffs = [1, 2]
secondCoeffs = [3, 4]

Output:
[3, 10, 8]
*/