# From Sand to Silicon

Từ hạt cát tới con chip. Đây là chỗ mình lưu lại hành trình học của mình, từ C cơ bản tới thiết kế vi mạch.

Mình là sinh viên năm 1 ngành Điện tử - Viễn thông. Mục tiêu: làm thiết kế chip.

**Vì sao là vi mạch?** Hồi nhỏ mình mê lắp Lego, ráp hoài không chán. Lớn lên vẫn muốn chơi tiếp, nên chọn luôn bản Lego promax: xếp hàng tỷ transistor thành một con chip. Hihi.

## Lộ trình

- [ ] **C cơ bản** (HK1, đang học)
- [ ] Mini project ESP32 (dịp Tết)
- [ ] Verilog / FPGA
- [ ] Tiny Tapeout: đưa thiết kế lên chip thật

## Cấu trúc

```
c-basics/
├── bai-tap-lop/   # bài tập trên lớp
└── tu-luyen/      # bài tự luyện, đánh số theo thứ tự học
```

### Bài tập trên lớp

| Bài | Nội dung | Kiến thức |
|---|---|---|
| `ToanTu2SoNguyen.c` | Tổng, hiệu, tích, thương 2 số, chặn chia cho 0 | Toán tử, ép kiểu |
| `max_min_tb.c` | Tìm max, min, trung bình 3 số thực | if, kiểm tra input |
| `MuaHangIfElse.c` | Tính tiền mua hàng, giảm giá khi mua từ 5 món | if - else if |
| `MuaHangSwitch.c` | Cùng bài trên, viết lại bằng switch | switch - case |
| `CuocXe.c` | Tính cước taxi theo loại xe và số km | switch + if lồng nhau |
| `RutTien.c` | Mô phỏng cây ATM: nhập PIN 3 lần, rút tiền, xem số dư, đếm tờ | do-while, switch, menu |

### Tự luyện

| Bài | Nội dung |
|---|---|
| `bai01_hello.c` | Hello World |
| `bai02_gioi_thieu.c` | In thông tin bản thân |
| `bai03_nhap_xuat.c` | Nhập tên (có dấu cách), năm sinh, điểm, tính tuổi và điểm TB |
| `bai04_toan_tu.c` | Chia nguyên, chia dư, `x++` khác `++x` thế nào |
| `bai05_nhap_kiem_tra.c` | Kiểm tra số chẵn lẻ |
| `bai06_if_else.c` | Xếp loại học lực theo điểm |
| `bai07_so_ngay_thang.c` | Số ngày trong tháng, gộp nhiều case trong switch |

## Chạy thử

Cần có `gcc`. Ví dụ:

```bash
gcc c-basics/bai-tap-lop/RutTien.c -o RutTien.out
./RutTien.out
```

## Đã học được

- Nhập/xuất với `printf`, `scanf`, `fgets`
- Toán tử, ép kiểu, tăng/giảm trước và sau
- Rẽ nhánh: `if - else`, `switch - case`
- Vòng lặp `do - while` để bắt nhập lại

Repo được cập nhật mỗi tuần.

## License

[MIT](LICENSE)
