# ForestRanger

숲에서 야생 동물을 그물로 포획해 도감처럼 수집하는 Unreal Engine 5 기반 게임입니다. 
동물 NPC가 보여주는 생태적 AI 행동의 구현에 초점을 둔 개인 포트폴리오 프로젝트입니다.

## 개요

플레이어는 숲을 누비며 야생 동물을 발견하고, 그물을 던져 포획한 뒤 자신만의 도감에 수집합니다. 숲 곳곳에 등장하는 적은 총으로 상대합니다.

이 프로젝트가 보여주고자 하는 핵심은, 동물들이 단순히 돌아다니는 배경이 아니라 플레이어의 접근을 감지하고 종에 따라 다르게 반응하는 살아 있는 존재처럼 행동하는 것입니다. 
겁 많은 동물은 멀리서부터 도망치고, 경계심이 강한 동물은 가까이 다가가야 반응하며, 무리 동물은 한 마리가 위험을 감지하면 함께 흩어집니다.

## 주요 특징

NPC AI 시스템 구현에 집중하며, 다음을 목표로 합니다.

- 데이터 주도 설계: 단일 Behavior Tree 골격을 재사용하고, 종별 행동 파라미터(경계 거리, 이동 속도, 군집 여부 등)를 DataTable로 주입해 다양한 동물 행동을 구성
- AI Perception 기반의 위협 감지 (시야 중심)
- EQS(Environment Query System)를 활용한 안전 지점 탐색 및 도주 경로 계산
- 그물 포획과 수집 도감으로 이어지는 게임플레이 루프
- 적 NPC의 추격 및 전투 AI

## 기술 스택

- Unreal Engine 5
- C++ (핵심 게임플레이 및 AI 로직) / Blueprint (조립 및 프로토타이핑)
- AI: Behavior Tree, Blackboard, AIController, EQS, AI Perception
- IDE: JetBrains Rider
- 버전 관리: Git

## 빌드 및 실행

이 프로젝트는 C++ 프로젝트이며, 생성물(Binaries, Intermediate 등)은 버전 관리에서 제외되어 있습니다. 따라서 clone 후 최초 1회 빌드가 필요합니다.

```bash
git clone <repository-url>
```

1. 레포지토리를 clone 합니다.
2. `ForestRanger.uproject`를 우클릭하고 "Generate project files"를 실행합니다.
3. JetBrains Rider(또는 Visual Studio)에서 프로젝트를 빌드합니다.
4. `ForestRanger.uproject`를 실행해 에디터를 엽니다.

## 개발 로드맵

- [x] 0단계 — 프로젝트 기반 셋업 (프로젝트 생성, Git, 기본 맵)
- [ ] 1단계 — 동물 AI 코어 (배회 → 감지 → 도주) *(진행 중)*
- [ ] 2단계 — 동물 생태계 (종 다양화, 데이터 주도 설계)
- [ ] 3단계 — 그물 포획 시스템
- [ ] 4단계 — 수집 도감
- [ ] 5단계 — 적 전투 AI
- [ ] 6단계 — 폴리시 및 아트 (환경 에셋, 애니메이션, 사운드, UI)
