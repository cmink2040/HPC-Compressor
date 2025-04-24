void haar_wavelet_transform(float* data, int n) {
    float temp[n]; 

    for (int i = 0; i < n; i += 2) {
        float avg  = (data[i] + data[i + 1]) / 2.0f;
        float diff = (data[i] - data[i + 1]) / 2.0f;
        temp[i / 2] = avg;
        temp[n / 2 + i / 2] = diff;
    }

    for (int i = 0; i < n; i++) {
        data[i] = temp[i];
    }
}