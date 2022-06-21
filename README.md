## OS3 과제 - 신규 시스템콜을 추가하고, 호출해보기

### Ubuntu 리눅스 환경, 5.11.22커널 버전
### 덧셈,뺄셈,곱셈,나머지 기능 추가

# 1. 개요
본 과제는 커널에 시스템 콜을 추가해 직접 시스템함수를 호출하며 커널의 이해도를 높인다. 본 과제의 커널 버전은 다음과 같다.
<img width="692" alt="image" src="https://user-images.githubusercontent.com/30142575/174768535-189ae032-c490-4c3d-9e7d-d7d89be5357c.png">

---

# 2. 코드
<syscall_64.tbl>
- 경로 : /usr/src/linux/linux-5.11.22/arch/x86/entry/syscalls
<img width="796" alt="image" src="https://user-images.githubusercontent.com/30142575/174768695-77de884b-127b-4b9d-b6bc-cf408ab71b3f.png">

<Makefile>
- 경로 : /usr/src/linux/linux-5.11.22/kernel
<img width="802" alt="image" src="https://user-images.githubusercontent.com/30142575/174768856-c384280e-d788-4bee-a674-bbb2cccf0aac.png">

<syscalls.h>
- 경로 : /usr/src/linux/linux-5.11.22/include/linux
<img width="642" alt="image" src="https://user-images.githubusercontent.com/30142575/174768937-7843c4df-aaab-4818-83c6-1aa14e14ec3d.png">

<sys_add.c>
- 경로 : /usr/src/linux/linux-5.11.22/kernel (이하 같음)
<img width="701" alt="image" src="https://user-images.githubusercontent.com/30142575/174769102-c88c728b-0f79-483c-af53-18c067dc7060.png">

  
<sys_minus.c>
  
  
<img width="716" alt="image" src="https://user-images.githubusercontent.com/30142575/174769168-83b20757-dff5-4b54-a260-6c2622776bb5.png">

  
<sys_multi.c>
  
  
<img width="720" alt="image" src="https://user-images.githubusercontent.com/30142575/174769272-839425b7-dded-4961-a729-494114bb8ff2.png">

  
<sys_mod.c>
  
  
<img width="727" alt="image" src="https://user-images.githubusercontent.com/30142575/174769503-5bda40d5-ad11-4737-a32a-e8612932d937.png">
  
  

---

# 3. 결과
+ 더하기
<img width="658" alt="image" src="https://user-images.githubusercontent.com/30142575/174770426-3960ad55-83b9-4207-9ce4-da535e39e5be.png">

+ 빼기
<img width="495" alt="image" src="https://user-images.githubusercontent.com/30142575/174770489-7e62f49b-1a6a-485e-86a9-b13caf82eb8e.png">

+ 곱하기
<img width="457" alt="image" src="https://user-images.githubusercontent.com/30142575/174770553-21a34d47-8f9f-4efd-94e2-475612f341a2.png">

+ %
<img width="556" alt="image" src="https://user-images.githubusercontent.com/30142575/174770607-29de08d5-8a9e-4d2a-9708-e379f1ea1353.png">

+ 예외처리
<img width="785" alt="image" src="https://user-images.githubusercontent.com/30142575/174770689-54e9f747-1124-4bc8-95fe-82000719e8e5.png">
